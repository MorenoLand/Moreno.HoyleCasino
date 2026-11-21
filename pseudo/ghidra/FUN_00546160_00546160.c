// FUN_00546160  00546160

void __fastcall FUN_00546160(int *param_1)

{
  int local_8;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if ((undefined4 *)param_1[local_8 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_8 + 1])(1);
    }
  }
  return;
}

