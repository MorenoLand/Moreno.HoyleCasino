// FUN_00648ec0  00648ec0

undefined4 * __thiscall FUN_00648ec0(undefined4 *param_1,undefined4 param_2)

{
  FUN_005fc0d0(0);
  *param_1 = CharacterScript::vftable;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x112) = 1;
  return param_1;
}

