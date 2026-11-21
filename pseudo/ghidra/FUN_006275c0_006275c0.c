// FUN_006275c0  006275c0

undefined2 * __thiscall
FUN_006275c0(int param_1,undefined2 *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)(param_1 + 0x48);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)(param_1 + 0x49);
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = *(undefined1 *)(param_1 + 0x4a);
  }
  *param_2 = *(undefined2 *)(param_1 + 0x48);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x4a);
  return param_2;
}

