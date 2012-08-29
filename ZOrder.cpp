#include <iostream>


void ZOrder( int n, int nxbuckets, int nybuckets, int *bucketx, int *buckety);
void view(int w, int h, int* state);
			
int main(int argc, char **argv){
	int width = 10;
	int height = 5;

	int* image = new int[width * height]();
	int* bucketx=new int();
	int* buckety=new int();
	
	for(int i=0;i<width*height;i++){
		ZOrder( i, width, height, bucketx, buckety);
		image[*buckety * width + *bucketx]= i;
	}
	view(width,height,image);
}

void view(int w, int h, int* state){
         for(int i=0;i<h;i++){
               	for(int j=0;j<w;j++){
               		printf("%3d",state[i*w+j]);
		}
               	printf("\n");
         }
	printf("\n");
}

void ZOrder( int n, int nxbuckets, int nybuckets, int *bucketx, int *buckety){
	
	*bucketx = n%nxbuckets;
	*buckety = n/nxbuckets;
}
