// FUN_00624a70  00624a70

undefined4 FUN_00624a70(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  cVar5 = FUN_005ec3a0(&local_14,param_4,param_3);
  if (cVar5 == '\0') {
    memset(param_1,0,0x10);
    memset(param_3,0,0x10);
    uVar6 = 0;
  }
  else {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    *param_1 = *param_1 + (local_14 - iVar1);
    param_1[1] = param_1[1] + (local_10 - iVar2);
    param_1[2] = param_1[2] + (local_c - iVar3);
    param_1[3] = param_1[3] + (local_8 - iVar4);
    *param_3 = *param_3 + (local_14 - iVar1);
    param_3[1] = param_3[1] + (local_10 - iVar2);
    param_3[2] = param_3[2] + (local_c - iVar3);
    param_3[3] = param_3[3] + (local_8 - iVar4);
    cVar5 = FUN_005ec3a0(&local_24,param_2,param_1);
    if (cVar5 == '\0') {
      memset(param_1,0,0x10);
      memset(param_3,0,0x10);
      uVar6 = 0;
    }
    else {
      iVar1 = *param_1;
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      iVar4 = param_1[3];
      *param_3 = *param_3 + (local_24 - iVar1);
      param_3[1] = param_3[1] + (local_20 - iVar2);
      param_3[2] = param_3[2] + (local_1c - iVar3);
      param_3[3] = param_3[3] + (local_18 - iVar4);
      *param_1 = *param_1 + (local_24 - iVar1);
      param_1[1] = param_1[1] + (local_20 - iVar2);
      param_1[2] = param_1[2] + (local_1c - iVar3);
      param_1[3] = param_1[3] + (local_18 - iVar4);
      uVar6 = 1;
    }
  }
  return uVar6;
}

