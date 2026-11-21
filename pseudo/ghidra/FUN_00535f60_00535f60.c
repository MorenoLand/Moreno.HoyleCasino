// FUN_00535f60  00535f60

void __fastcall FUN_00535f60(int param_1)

{
  char local_7c [108];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00536730();
  local_8 = 0;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    sprintf(local_7c,"SlotReel%d",local_c);
    local_8 = FUN_00607960(local_7c,0xffffffff);
    if (local_8 != -1) {
      *(int *)(param_1 + 0x58 + local_c * 4) = local_8;
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

