// FUN_0060dc50  0060dc50

void FUN_0060dc50(undefined4 param_1)

{
  if (DAT_015e5190 != (int *)0x0) {
    (**(code **)(*DAT_015e5190 + 0x4c))(DAT_015e5190);
    (**(code **)(*DAT_015e5190 + 0x50))(DAT_015e5190,param_1,8);
    (**(code **)(*DAT_015e5190 + 8))(DAT_015e5190);
    DAT_015e5190 = (int *)0x0;
  }
  return;
}

