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
    printf("Hello World !");
}
void dimension (char *source_path){
    unsigned char *data = NULL;
    int width;
    int height;
    int channels;
    
    if (read_image_data(source_path, &data, &width, &height, &channels)) {
        printf("dimension: %d, %d\n", width, height);
    } 
        
    else {
        fprintf(stderr, "Erreur : Impossible de lire l'image %s\n", source_path);
    }
}


void first_pixel(char *source_path) {
    unsigned char *data = NULL;
    int width, height, channel_count;

    if (read_image_data(source_path, &data, &width, &height, &channel_count) != 0) {
        printf("Erreur lors de la lecture de l'image.\n");
        return;
    }

    // Vérifie qu'on a bien au moins 3 canaux (R, G, B)
    if (channel_count < 3) {
        printf("Image avec moins de 3 canaux, impossible de lire RGB.\n");
        return;
    }

    int r = data[0];
    int g = data[1];
    int b = data[2];

    printf("first_pixel: %d, %d, %d\n", r, g, b);

    // Libérer la mémoire si nécessaire (selon read_image_data)
    free(data);
}