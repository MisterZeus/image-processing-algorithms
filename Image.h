#define BASIC 0; // unsigned character samples: 1 byte per pixel
#define UINT  1; // unsigned integer samples: 4 bytes per pixel
#define REAL  2; // floating point samples: float real
#define CMPLX 3; // complex number samples: float real, imaginary

struct Image {
    int rows;    // number of rows in our Image
    int columns; // number of columns in our Image

    unsigned char type; /* how are we storing the pixel samples?
                           See the #defined types above! */

    unsigned char *Data; // pointer to our Image data samples
};
