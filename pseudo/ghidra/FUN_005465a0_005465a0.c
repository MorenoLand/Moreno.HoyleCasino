// FUN_005465a0  005465a0

int __fastcall FUN_005465a0(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + local_8 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

