// FUN_005c3140  005c3140

void __thiscall FUN_005c3140(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_005be340(param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x50);
  *param_4 = *(int *)(iVar1 + 0x20);
  param_4[1] = *(int *)(iVar1 + 0x24);
  param_4[2] = *(int *)(iVar1 + 0x28);
  *param_4 = *(int *)(*(int *)(param_1 + 0x50) + 0x2c) * iVar2 + *param_4;
  param_4[1] = *(int *)(*(int *)(param_1 + 0x50) + 0x30) * iVar2 + param_4[1];
  param_4[2] = *(int *)(*(int *)(param_1 + 0x50) + 0x34) * iVar2 + param_4[2];
  return;
}

