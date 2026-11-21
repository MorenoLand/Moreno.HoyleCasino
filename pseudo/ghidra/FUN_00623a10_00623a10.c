// FUN_00623a10  00623a10

void FUN_00623a10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t _Size;
  int iVar6;
  void *_Src;
  int local_10;
  
  iVar1 = param_1[2];
  iVar2 = *param_1;
  iVar3 = param_1[3];
  iVar4 = param_1[1];
  for (local_10 = 0; local_10 < iVar3 - iVar4; local_10 = local_10 + 1) {
    iVar5 = FUN_00623930();
    _Size = iVar5 * (iVar1 - iVar2);
    iVar5 = FUN_006238d0(param_1[1] + local_10);
    iVar6 = FUN_00623930();
    _Src = (void *)(iVar5 + iVar6 * *param_1);
    iVar5 = FUN_00623930();
    memcpy((void *)(iVar5 * (iVar1 - iVar2) * local_10 + param_2),_Src,_Size);
  }
  return;
}

