bool canFormArray(int* arr, int arrSize, int** pieces, int piecesSize, int* piecesColSize){
    int hash[101]={0}, i, j;
    for(i=0; i<arrSize; i++)
        hash[arr[i]]=i+1;
    
    for(i=0; i<piecesSize; i++){
        if(hash[pieces[i][0]]==0)
            return false;
        if(piecesColSize[i]>1){
            for(j=1; j<piecesColSize[i]; j++){
                if(hash[pieces[i][j]] != hash[pieces[i][j-1]]+1)
                    return false;
            }
        }      
    }
    return true;
}