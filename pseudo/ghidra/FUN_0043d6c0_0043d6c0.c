// FUN_0043d6c0  0043d6c0

void __thiscall FUN_0043d6c0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    uVar4 = 0xffffffff;
    uVar3 = *(undefined4 *)(param_1 + 0x1dc);
    uVar2 = FUN_0043d9b0(param_2);
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),uVar2,uVar3,uVar4);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x1f,0);
  }
  return;
}

