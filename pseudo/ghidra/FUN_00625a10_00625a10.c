// FUN_00625a10  00625a10

undefined4 __thiscall FUN_00625a10(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x2c))(&local_8,&local_c,local_18,local_10,&local_14,&local_1c);
  if ((param_3 & 1) != 0) {
    param_2[3] = param_2[3] - param_2[1];
    param_2[1] = 0;
  }
  if ((param_3 & 2) != 0) {
    param_2[1] = (local_c - param_2[3]) + param_2[1];
    param_2[3] = local_c;
  }
  if ((param_3 & 4) != 0) {
    param_2[2] = param_2[2] - *param_2;
    *param_2 = 0;
  }
  if ((param_3 & 8) != 0) {
    *param_2 = (local_8 - param_2[2]) + *param_2;
    param_2[2] = local_8;
  }
  if ((param_3 & 0x10) != 0) {
    iVar1 = param_2[3];
    iVar2 = param_2[1];
    iVar3 = FUN_00686cc0();
    param_2[1] = iVar3;
    iVar3 = FUN_00686cc0();
    param_2[1] = (iVar3 - local_1c) + param_2[1];
    param_2[3] = param_2[1] + (iVar1 - iVar2);
  }
  if ((param_3 & 0x20) != 0) {
    iVar1 = param_2[2];
    iVar2 = *param_2;
    iVar3 = FUN_00686cc0();
    *param_2 = iVar3;
    iVar3 = FUN_00686cc0();
    *param_2 = (iVar3 - local_14) + *param_2;
    param_2[2] = *param_2 + (iVar1 - iVar2);
  }
  return 1;
}

