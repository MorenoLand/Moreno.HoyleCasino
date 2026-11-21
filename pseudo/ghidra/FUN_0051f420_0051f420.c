// FUN_0051f420  0051f420

void __thiscall FUN_0051f420(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x80) != param_2) {
    FUN_005f1ad0(*(undefined4 *)(&DAT_00721a74 + param_2 * 4));
    FUN_0051fea0();
    *(int *)(param_1 + 0x80) = param_2;
    FUN_0051f860();
    FUN_0051fbe0();
    FUN_0051fd90();
  }
  return;
}

