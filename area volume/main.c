#include <stdio.h>
#include <stdlib.h>

int main(void){
    int choice, choice2;
    float pi=3.14, h, r, area, volume, a, g;

    printf("Which shape do you want?\n\n 1-->Vertical Circular Cone\n 2-->Sphere\n 3-->Cuboid\n 4-->Tetrahedron\n 5-->Square Prism\n 6-->Rectangular Prism\n 7-->Triangular Prism\n 8-->Ellipsoid\n ");
    scanf("%d", &choice);
    
    printf("1-Area/2-Volume ?\n");
    scanf("%d", &choice2);
    
    switch(choice){
        case 1: printf("Vertical Circular Cone\n");
                if(choice2==1){
                    printf("Main axis=?");
                    scanf("%f", &a);
                    printf("Radius=?");
                    scanf("%f", &r);
                    area = a*r*pi;
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Radius=?");
                    scanf("%f", &r);
                    printf("Height=?");
                    scanf("%f", &h);
                    volume = (r*r*h*pi)/3;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 2: printf("Sphere\n");
                if(choice2==1){
                    printf("Radius=?");
                    scanf("%f", &r);
                    area = 4*r*r*pi;
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Radius=?");
                    scanf("%f", &r);
                    volume = (4*pi*r*r*r)/3;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 3: printf("Cuboid\n");
                if(choice2==1){
                    printf("Width=?");
                    scanf("%f", &g);
                    printf("Length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    area = 2*(a*g+h*g+a*h);
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Width=?");
                    scanf("%f", &g);
                    printf("Length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    volume = g*a*h;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 4: printf("Tetrahedron\n");
                if(choice2==1){
                    printf("Edge length=?");
                    scanf("%f", &a);
                    area = a*a*1.732;
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Edge length=?");
                    scanf("%f", &a);
                    volume = (a*a*1.41)/12;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 5: printf("Square Prism\n");
                if(choice2==1){
                    printf("Base length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    area = 2*a*a+4*a*h;
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Base length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    volume = a*a*h;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 6: printf("Rectangular Prism\n");
                if(choice2==1){
                    printf("Length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    printf("Width=?");
                    scanf("%f", &g);
                    area = 2*(a*g+a*h+h*g);
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Length=?");
                    scanf("%f", &a);
                    printf("Height=?");
                    scanf("%f", &h);
                    printf("Width=?");
                    scanf("%f", &g);
                    volume = a*g*h;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 7: printf("Triangular Prism\n");
                if(choice2==1){
                    printf("Length of the rectangle=?");
                    scanf("%f", &h);
                    printf("Width of the rectangle=?");
                    scanf("%f", &g);
                    printf("Base of the triangle=?");
                    scanf("%f", &a);
                    printf("Height of the triangle=?");
                    scanf("%f", &r);
                    area = a*r+h*(g+r+a);
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Length of the rectangle=?");
                    scanf("%f", &h);
                    printf("Base of the triangle=?");
                    scanf("%f", &a);
                    printf("Height of the triangle=?");
                    scanf("%f", &r);
                    volume = h*a*r/2;
                    printf("Volume=%.2f", volume);
                }
                break;

        case 8: printf("Ellipsoid\n");
                if(choice2==1){
                    printf("Short radius=?");
                    scanf("%f", &r);
                    printf("Long radius=?");
                    scanf("%f", &a);
                    area = a*r*pi;
                    printf("Area=%.2f", area);
                }
                if(choice2==2){
                    printf("Half length of the major axis=?");
                    scanf("%f", &a);
                    printf("Half length of the minor axis=?");
                    scanf("%f", &g);
                    printf("Half length of the height=?");
                    scanf("%f", &h);
                    volume = a*g*h*pi*(4.0/3.0);
                    printf("Volume=%.2f", volume);
                }
                break;

        default: printf("Your choice is wrong, you should enter only numbers between ['1,8']!");    
    }
    return 0;
}

