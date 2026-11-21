// FUN_0052ddf0  0052ddf0

void __fastcall FUN_0052ddf0(int param_1)

{
  char cVar1;
  char *_Format;
  int local_11c;
  size_t local_118;
  char local_114 [4];
  undefined4 local_110;
  char local_10c [256];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = *(int *)(DAT_0079338c + 4);
  if (local_8 < 1000000) {
    sprintf(local_10c,"%d",local_8);
  }
  else {
    _Format = (char *)FUN_00630f40("SID_SLOTMACHINES_MAXCREDITS");
    sprintf(local_10c,_Format);
  }
  for (local_110 = 0; local_110 < 6; local_110 = local_110 + 1) {
    (**(code **)(**(int **)(param_1 + 0x74 + local_110 * 4) + 0xb4))(&PTR_006b27f8);
  }
  local_118 = strlen(local_10c);
  if (6 < (int)local_118) {
    FUN_005e9f20("false","..\\Casino\\slotmachinedisplay.cpp",0x393);
    local_118 = 6;
  }
  for (local_110 = 0; local_110 < (int)local_118; local_110 = local_110 + 1) {
    local_114[0] = local_10c[(local_118 - local_110) + -1];
    local_114[1] = 0;
    if (local_114[0] == '\0') break;
    (**(code **)(**(int **)(param_1 + 0x74 + local_110 * 4) + 0xb4))(local_114);
  }
  sprintf(local_10c,"%d",*(undefined4 *)(DAT_0079338c + 8));
  (**(code **)(**(int **)(param_1 + 0x8c) + 0xb4))(local_10c);
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x74))();
  if (*(char *)(DAT_0079338c + 0x7f) == '\0') {
    cVar1 = FUN_00538440();
    if (cVar1 != '\0') {
      for (local_11c = 0; local_11c < 3; local_11c = local_11c + 1) {
        if (*(int *)(DAT_0079338c + 8) < local_11c + 1) {
          (**(code **)(**(int **)(param_1 + 0xa0 + local_11c * 4) + 0xb0))(0);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0xa0 + local_11c * 4) + 0xb0))(1);
        }
      }
    }
    FUN_0052ac20();
    cVar1 = FUN_00536150();
    if (cVar1 == '\0') {
      FUN_0052e2b0();
    }
    else if (*(char *)(DAT_0079338c + 0x7d) != '\0') {
      *(undefined1 *)(DAT_0079338c + 0x7d) = 0;
      FUN_005f5d50(0);
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x70))();
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

