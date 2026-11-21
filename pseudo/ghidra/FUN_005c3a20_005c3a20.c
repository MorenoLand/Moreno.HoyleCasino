// FUN_005c3a20  005c3a20

void __thiscall FUN_005c3a20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  if ((param_1[0xc] != 0) && ((undefined4 *)param_1[0xc] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  param_1[0xc] = param_2[0xc];
  FUN_005c63d0(param_2 + 8);
  return;
}

