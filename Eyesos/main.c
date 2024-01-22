#include <stdio.h>

extern void turnOnSystem();
extern void turnOnCamera(char* cameraName);
extern void turnOnLidar();
extern void useOEClassifier();
extern void detectObject();

int main() {
    printf("User: ADA, turn on\n");
    turnOnSystem();

    printf("Augmented Vision\n");
    printf("ADA: turn on alpha camera & beta camera, LIDAR\n");
    turnOnCamera("alpha");
    turnOnCamera("beta");
    turnOnLidar();

    printf("ADA: use OEClassifier to classification object\n");
    useOEClassifier();

    printf("If detected object: ADA: Spotted to your left/right? distance? Still left? step.\n");
    detectObject();

    return 0;
}

