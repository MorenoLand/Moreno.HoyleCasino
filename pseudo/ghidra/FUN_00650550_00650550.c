// FUN_00650550  00650550

void __thiscall FUN_00650550(int param_1,char param_2)

{
  if ((*(int *)(param_1 + 0x30) != 0) && (FUN_00679aa0(param_2), param_2 != '\0')) {
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

