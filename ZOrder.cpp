#include <iostream>


void ZOrder( int n, int w , int h, int *x, int *y);
void view(int w, int h, int* state);
			
int main(int argc, char **argv){
	int width = 10;
	int height = 5;

	if(argc == 3){
	width = atoi(argv[1]);
	height = atoi(argv[2]);
	}	

	int* image = new int[width * height]();
	int* tx=new int();
	int* ty=new int();
	
	for(int i=0;i<width*height;i++){
		ZOrder( i, width, height, tx, ty);
		image[*ty * width + *tx]= i;
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

void ZOrder( int n, int w, int h, int *x, int *y){
	
	*x= n%w;
	*y= n/w;
}
