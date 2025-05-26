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
void first_pixel(char *source_path) {
    unsigned char *data = NULL;
    int width, height, channel_count;

    // Lire l'image
    if (read_image_data(source_path, &data, &width, &height, &channel_count) == 0) {
        printf("Erreur lors de la lecture de l'image.\n");
        return;
    }

    // Vérifier que les données sont valides
    if (data == NULL) {
        printf("Aucune donnée image trouvée.\n");
        return;
    }

    // Extraire les 3 premiers octets (R, G, B)
    unsigned char R = data[0];
    unsigned char G = data[1];
    unsigned char B = data[2];

    // Afficher la couleur du premier pixel
    printf("first_pixel: %d, %d, %d\n", R, G, B);

    return 0;
}