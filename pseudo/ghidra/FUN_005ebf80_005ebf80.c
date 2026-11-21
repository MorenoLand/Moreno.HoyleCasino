// FUN_005ebf80  005ebf80

undefined4 * __thiscall FUN_005ebf80(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24 [5];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_005ec060(&local_c,&local_10,local_24,&local_8);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x14);
  *param_2 = local_c;
  param_2[1] = local_10;
  param_2[2] = (iVar1 - iVar2) - local_24[0];
  param_2[3] = (iVar3 - iVar4) - local_8;
  return param_2;
}

