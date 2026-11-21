// FUN_00462ba0  00462ba0

void FUN_00462ba0(int param_1,int param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined2 local_34 [20];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if ((param_3 == '\0') || ((param_3 != '\0' && (4 < param_2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (0x14 < param_2) {
    FUN_005e9f20("handSize < 21","..\\Casino\\pokerai.cpp",0x5d);
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    if (local_8 < param_2) {
      local_34[local_8] = *(undefined2 *)(param_1 + local_8 * 2);
    }
    else {
      local_34[local_8] = 0;
    }
  }
  FUN_00641e20(local_34,param_2);
  cVar2 = FUN_00463710(local_34,param_2);
  if (((((cVar2 == '\0') || (!bVar1)) &&
       ((cVar2 = FUN_00463760(local_34,param_2), cVar2 == '\0' || (!bVar1)))) &&
      (((cVar2 = FUN_004637b0(local_34,param_2), cVar2 == '\0' &&
        (cVar2 = FUN_004637d0(local_34,param_2), cVar2 == '\0')) &&
       ((cVar2 = FUN_00463840(local_34,param_2), cVar2 == '\0' || (!bVar1)))))) &&
     ((((cVar2 = FUN_004638a0(local_34,param_2), cVar2 == '\0' || (!bVar1)) &&
       (cVar2 = FUN_00463940(local_34,param_2), cVar2 == '\0')) &&
      (cVar2 = FUN_00463960(local_34,param_2), cVar2 == '\0')))) {
    FUN_004639c0(local_34,param_2);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

