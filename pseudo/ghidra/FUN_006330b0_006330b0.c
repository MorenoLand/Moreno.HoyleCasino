// FUN_006330b0  006330b0

void __fastcall FUN_006330b0(int *param_1)

{
  undefined4 *local_8;
  
  FUN_00604810(".\\resource");
  FUN_00604810(&DAT_006d61ec);
  for (local_8 = (undefined4 *)(**(code **)(*param_1 + 0x204))();
      (local_8 != (undefined4 *)0x0 && (*(char *)*local_8 != '\0')); local_8 = local_8 + 1) {
    FUN_00604810(*local_8);
  }
  return;
}

