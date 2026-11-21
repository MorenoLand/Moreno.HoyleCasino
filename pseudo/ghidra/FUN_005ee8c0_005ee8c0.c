// FUN_005ee8c0  005ee8c0

void __thiscall FUN_005ee8c0(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  FUN_005f6580(param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x22) = param_2;
  *(undefined1 *)((int)param_1 + 0x89) = param_3;
  *(undefined1 *)((int)param_1 + 0x8a) = param_4;
  (**(code **)(*param_1 + 0xac))();
  return;
}

