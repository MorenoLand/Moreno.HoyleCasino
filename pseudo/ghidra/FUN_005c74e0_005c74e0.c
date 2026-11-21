// FUN_005c74e0  005c74e0

void __thiscall FUN_005c74e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_005be340(param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x50);
  *param_4 = *(int *)(iVar1 + 0x2c);
  param_4[1] = *(int *)(iVar1 + 0x30);
  param_4[2] = *(int *)(iVar1 + 0x34);
  *param_4 = *(int *)(*(int *)(param_1 + 0x50) + 0x38) * iVar2 + *param_4;
  param_4[1] = *(int *)(*(int *)(param_1 + 0x50) + 0x3c) * iVar2 + param_4[1];
  param_4[2] = *(int *)(*(int *)(param_1 + 0x50) + 0x40) * iVar2 + param_4[2];
  return;
}

