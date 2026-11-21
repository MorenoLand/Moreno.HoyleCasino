// FUN_00632f80  00632f80

void __fastcall FUN_00632f80(int *param_1)

{
  undefined4 *local_8;
  
  FUN_00604910(".\\resource");
  FUN_00604910(&DAT_006d61ec);
  for (local_8 = (undefined4 *)(**(code **)(*param_1 + 0x200))();
      (local_8 != (undefined4 *)0x0 && (*(char *)*local_8 != '\0')); local_8 = local_8 + 1) {
    FUN_00604910(*local_8);
  }
  return;
}

