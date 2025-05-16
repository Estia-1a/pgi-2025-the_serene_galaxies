#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World!! !");
}
void helloWorld() {
    printf("Hello World !");
}
void dimension (char *source_path){
    unsigned char *data = NULL;
    int width;                   // largeur de l’image
    int height;                  // hauteur de l’image
    int channels;                // nombre de canaux (ex: RGB = 3)

    if (read_image_data(source_path, &data, &width, &height, &channels)) {
        printf("dimension: %d, %d\n", width, height);
    } 
    else {
        fprintf(stderr, "Erreur : Impossible de lire l'image %s\n", source_path);
    }
}