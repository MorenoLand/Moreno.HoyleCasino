// FUN_005f8420  005f8420

void __thiscall FUN_005f8420(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = FUN_005f88f0();
  if (cVar3 == '\0') {
    FUN_005f9a80();
  }
  iVar1 = *(int *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = param_2;
  *(undefined4 *)(param_1 + 0x104) = param_3;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x108) + (*(int *)(param_1 + 0x110) - iVar1);
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0x10c) - iVar2);
  cVar3 = FUN_005f88f0();
  if (cVar3 == '\0') {
    FUN_005f9a80();
  }
  return;
}

