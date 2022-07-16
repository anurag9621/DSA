#include<iosteram>
using namespace std;
struct Matrix{
    int A[15];
    
};
void Set(struct Matrix *m, int i, int j,int k)
{
    

    if (i < j)
    {
        m[i,j]=0
    }
    else{

        m->A[k]=m[i][j];
        k++;
    }
}
int display(int k){
    for (int i = 0; i <= k;i++){
        cout << A[i] << " ";
        
    }
}
int main(){
    int k;
    struct Matrix m;
    set(&m, 1, 1, 9);
    set(&m,)
}