// FUN_00601580  00601580

void __fastcall FUN_00601580(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_8;
  
  if (((char)param_1[6] != '\0') && (cVar1 = (**(code **)(*param_1 + 0xc))(), cVar1 != '\0')) {
    uVar2 = FUN_005eb610();
    local_8 = (uVar2 & 0xff) + (int)(char)param_1[7] * param_1[3];
    uVar2 = FUN_005eb610();
    if ((uVar2 & 0xff) != local_8) {
      if ((int)local_8 < 1) {
        local_8 = 0;
      }
      if (0xfe < (int)local_8) {
        local_8 = 0xff;
      }
      if (((param_1[3] == -1) && (local_8 == 0)) || ((param_1[3] == 1 && (local_8 == 0xff)))) {
        (**(code **)(*param_1 + 0x14))();
      }
      else {
        FUN_005eb5d0(local_8 & 0xff);
      }
    }
  }
  return;
}

