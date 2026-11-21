// FUN_0060c910  0060c910

undefined4 __fastcall FUN_0060c910(int param_1)

{
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = *(int **)(param_1 + 0xc);
  for (; local_8 < *(int *)(param_1 + 4); local_8 = local_8 + 1) {
    if ((undefined4 *)*local_c != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*local_c)(1);
    }
    *local_c = 0;
    local_c = local_c + 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}

