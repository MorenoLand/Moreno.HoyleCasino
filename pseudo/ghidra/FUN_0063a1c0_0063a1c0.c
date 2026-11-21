// FUN_0063a1c0  0063a1c0

int __thiscall FUN_0063a1c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  strcpy((char *)(param_1 + 0x10),(char *)(param_2 + 0x10));
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0063a2a0();
    puVar2 = (undefined4 *)(param_2 + 0x28);
    puVar3 = (undefined4 *)(param_1 + 0x28);
    for (iVar1 = 0xe1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  else {
    FUN_0063ab10(param_1 + 0x10);
  }
  return param_1;
}

