// FUN_0060c500  0060c500

void __thiscall FUN_0060c500(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)param_2;
  if ((((char)param_2 == '\0') && (param_2._1_1_ == '\0')) && (param_2._2_1_ == '\0')) {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(undefined2 *)(param_1 + 0x7e) = uVar1;
  *(char *)((int)param_1 + 0x1fa) = param_2._2_1_;
  (**(code **)(*param_1 + 0xac))();
  return;
}

