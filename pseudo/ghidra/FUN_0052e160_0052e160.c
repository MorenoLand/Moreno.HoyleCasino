// FUN_0052e160  0052e160

void __fastcall FUN_0052e160(int param_1)

{
  char *_Format;
  size_t local_80;
  char local_7c [4];
  undefined4 local_78;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_0079338c + 0x78) < 10000) {
    sprintf(local_74,"%d",*(undefined4 *)(DAT_0079338c + 0x78));
  }
  else {
    _Format = (char *)FUN_00630f40("SID_SLOTMACHINES_PAYOUTMAX");
    sprintf(local_74,_Format);
  }
  for (local_78 = 0; local_78 < 4; local_78 = local_78 + 1) {
    (**(code **)(**(int **)(param_1 + 0x90 + local_78 * 4) + 0xb4))(&PTR_006b27f8);
  }
  local_80 = strlen(local_74);
  if (4 < (int)local_80) {
    FUN_005e9f20("false","..\\Casino\\slotmachinedisplay.cpp",0x3d5);
    local_80 = 4;
  }
  for (local_78 = 0; local_78 < (int)local_80; local_78 = local_78 + 1) {
    local_7c[0] = local_74[(local_80 - local_78) + -1];
    local_7c[1] = 0;
    if (local_7c[0] == '\0') break;
    (**(code **)(**(int **)(param_1 + 0x90 + local_78 * 4) + 0xb4))(local_7c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

