/**
 * Shortest Path in Image
 *
 * This algorithm tries to find the optima path between
 * 2 pointers that are connected with a line.
 *
 * This image contains a Bitmap, and we need to binarize it
 * for better results, and run some filters.
 */

/* Project Headers */
#include <pather/imagem.h>

/* Guards */
#ifndef _PATHER_PATHER_H
#define _PATHER_PATHER_H

/**
 * Point in Matrix
 *
 * We use this data type to represent a point in our
 * Euclidean Space Matrix.
 */
typedef struct
{
    int x;
    int y;
} Coordenada;

/*============================================================================*/
/* Fun��o central do trabalho. */

void filter(Imagem1C *img, Imagem1C *dest);
void probabilistic_binarization (Imagem1C* img);
int encontraCaminho (Imagem1C* img, Coordenada** caminho);

/*============================================================================*/

#endif
