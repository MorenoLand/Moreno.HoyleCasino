// FUN_0056a800  0056a800

void __fastcall FUN_0056a800(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0x3ac + local_8 * 2) = 0;
  }
  FUN_0056a7a0(0x31,1);
  FUN_0056a860();
  FUN_0056a960();
  return;
}

