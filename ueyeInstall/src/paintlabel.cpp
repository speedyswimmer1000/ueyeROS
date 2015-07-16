/*!
 * \file    paintlabel.cpp
 * \date    22.06.2011
 * \author  IDS Imaging Development Systems GmbH
 * \version 1.0.0
 *
 * \brief   label to paint images
 *
 * \par Last modified
 *      on $Date:$ by $Author:$
 *
 * \par Revision history
 * \li  22.06.2011 - (1.0.0) created
 */

#include "paintlabel.h"
#include <QPainter>
#include <QDebug>

PaintLabel::PaintLabel(QWidget *parent) :
    QLabel(parent)
{
    m_bScaledContent = false;
}

void PaintLabel::setPixmap(const QPixmap &pixmap)
{
    // we also can draw a pixmap
    // conversion is slow
    m_Image = pixmap.toImage();

    update();
}

void PaintLabel::paintEvent(QPaintEvent *ev)
{
    Q_UNUSED(ev);

    if (!m_Image.isNull())
    {
        if (m_bScaledContent)
        {
            m_Image.scaled(this->width(), this->height());
        }

        QRectF target(0.0, 0.0, m_Image.width(), m_Image.height());

        // Alignment draw
        if (this->alignment() & Qt::AlignCenter)
        {
            qreal posX = this->width() / 2 - m_Image.width() / 2;
            qreal posY = this->height() / 2 - m_Image.height() / 2;
            target.setRect(posX, posY, m_Image.width(), m_Image.height());
        }

        // draw the image
        QPainter painter(this);
        painter.drawImage(target, m_Image);
        painter.end();
    }
}

void PaintLabel::clear()
{
    // set image to null
    m_Image = QImage();

    update();
}

void PaintLabel::setImage(QImage &image)
{
    m_Image = image.scaled(this->width(), this->height());

    // paint the new image
   update();
}

void PaintLabel::setImage(QImage &image, double scaleFactor, bool adjustSize)
{
    if (adjustSize)
    {
        // scale image to label size
        m_Image = image.scaled(this->width(), this->height());
    }
    else
    {
        if (scaleFactor > 0.0 && scaleFactor != 1.0)
        {
            // scale the image
            m_Image = image.scaled(image.width() * scaleFactor, image.height() * scaleFactor);
        }
        else
        {
            // we take the picture as it is
            m_Image = image;
        }

        // resize the label to the image size
        this->resize(m_Image.size());
    }

    // paint the new image
    update();
}

void PaintLabel::adjustSize()
{
    // resize the label to the image size
    this->resize(m_Image.size());

    // repaint the new size
    update();
}

bool PaintLabel::scaledContents()
{
    return m_bScaledContent;
}

void PaintLabel::setScaledContents(bool scaled)
{
    m_bScaledContent = scaled;
}

void PaintLabel::scale(double factor)
{
    if (factor > 0.0 && factor != 1.0)
    {
        // scale the image
        m_Image = m_Image.scaled(m_Image.width() * factor, m_Image.height() * factor);

        // repaint the new size
        update();
    }
}
