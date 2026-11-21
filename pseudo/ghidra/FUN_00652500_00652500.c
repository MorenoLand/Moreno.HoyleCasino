// FUN_00652500  00652500

void __thiscall FUN_00652500(undefined4 *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 != '\0') {
    cVar2 = FUN_00650310();
    if ((cVar2 == '\0') && (cVar2 = FUN_00636ce0(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((*(char *)(param_1 + 4) == '\0') && (bVar1)) {
      (**(code **)(*(int *)*param_1 + 0x54))();
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      if (0 < (int)param_1[2]) {
        param_1[2] = param_1[2] + -1;
      }
      param_1[5] = 0;
      FUN_00651af0();
      FUN_00652900(100);
    }
  }
  return;
}

