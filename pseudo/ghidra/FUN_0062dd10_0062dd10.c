// FUN_0062dd10  0062dd10

void FUN_0062dd10(undefined4 param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_0076208c == 0) {
    *(undefined4 *)PTR_DAT_00762088 = param_1;
  }
  else {
    uVar1 = 1;
    *(undefined4 *)PTR_DAT_00762088 = param_1;
    for (local_8 = 1; local_8 < DAT_00762090; local_8 = local_8 + 1) {
      *(int *)(PTR_DAT_00762088 + local_8 * 4) =
           *(int *)(PTR_DAT_00762088 + local_8 * 4 + -4) * 0x41c64e6d + 0x3039;
    }
    PTR_DAT_00762080 = PTR_DAT_00762088 + DAT_00762094 * 4;
    PTR_DAT_00762084 = PTR_DAT_00762088;
    for (local_8 = 0; local_8 < DAT_00762090 * 10; local_8 = local_8 + 1) {
      FUN_0062e0a0(uVar1);
    }
  }
  return;
}

