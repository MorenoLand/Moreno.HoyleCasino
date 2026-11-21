// FUN_0057c0b0  0057c0b0

void __thiscall
FUN_0057c0b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  char cVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x208 + param_2 * 0x224) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x20c + param_2 * 0x224) = param_4;
  iVar1 = *(int *)(param_1 + 0x19d0);
  *(undefined4 *)(iVar1 + 0x210 + param_2 * 0x224) = param_5;
  *(undefined4 *)(iVar1 + 0x214 + param_2 * 0x224) = param_6;
  cVar2 = FUN_005df700(0xffffffff);
  if (cVar2 != '\0') {
    FUN_005f85d0();
  }
  return;
}

