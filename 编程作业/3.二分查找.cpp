#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L->Data = int[]{1,3,5};
    L->Last = 3;
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

Position BinarySearch( List L, ElementType X ){
	ElementType left = 1;
	ElementType right = L->Last;
	while(left<right){
		ElementType center = (left+right)/2;  //�����м�ֵ 
		if(L->Data[center] < X){     //���м�ֵ��X ���Ұ�� 
			left = center+1;
		}else if(X < L->Data[center]){   //���м�ֵС��X ������ 
			right = center-1;
		}else  //�ҵ��ˣ�ֱ�ӷ��� 
			return center;
	}
	return NotFound;
} 
