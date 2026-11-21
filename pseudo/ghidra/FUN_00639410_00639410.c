// FUN_00639410  00639410

void FUN_00639410(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 6) = param_6;
  return;
}

