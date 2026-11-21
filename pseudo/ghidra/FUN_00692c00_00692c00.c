// FUN_00692c00  00692c00

void FUN_00692c00(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(float *)(param_1 + -4 + iVar2 * 4) = param_2 + *(float *)(param_1 + iVar1);
  } while (iVar2 < 0x38);
  return;
}

