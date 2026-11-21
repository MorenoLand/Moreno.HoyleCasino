// FUN_00633490  00633490

void __thiscall FUN_00633490(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char local_5bc;
  undefined1 local_5bb [1023];
  undefined4 local_1bc;
  int local_1b8;
  char local_1b4 [52];
  undefined4 local_180;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_18;
  FILE *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = -(uint)(param_2 != 0xffffffff) & param_2;
  while (iVar2 = (**(code **)(*param_1 + 0xe4))(), (int)local_c < iVar2) {
    piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
    cVar1 = (**(code **)(*piVar3 + 0xac))();
    if (cVar1 != '\0') {
      piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
      local_1bc = (**(code **)(*piVar3 + 0xcc))();
      local_5bc = '\0';
      memset(local_5bb,0,0x3ff);
      sprintf(&local_5bc,"data\\%s.hs",local_1bc);
      local_14 = (FILE *)FUN_005ea9c0(&local_5bc,&DAT_006c2d2c);
      if (local_14 == (FILE *)0x0) {
        FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x418);
        goto LAB_00633769;
      }
      local_8 = 0;
      while( true ) {
        piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
        iVar2 = (**(code **)(*piVar3 + 0xc0))();
        if (iVar2 <= local_8) break;
        for (local_1b8 = 0; local_1b8 < 10; local_1b8 = local_1b8 + 1) {
          piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
          local_180 = (**(code **)(*piVar3 + 0xc4))(local_8,local_1b8);
          local_10 = FUN_0062fba0(0x2e);
          strcpy(local_1b4,s_KatzMan_00762708 + local_10 * 0x44);
          local_17c = (*(int *)(&DAT_0076273c + local_10 * 0x44) == -1) + 1;
          local_178 = *(undefined4 *)(&DAT_0076273c + local_10 * 0x44);
          iVar2 = local_10 * 0x44;
          local_174 = *(undefined4 *)(&DAT_00762740 + iVar2);
          local_170 = *(undefined4 *)(&DAT_00762744 + iVar2);
          local_16c = *(undefined4 *)(&DAT_00762748 + iVar2);
          fwrite(local_1b4,1,0x98,local_14);
        }
        local_8 = local_8 + 1;
      }
      fclose(local_14);
      if (-1 < (int)param_2) break;
    }
    local_c = local_c + 1;
  }
  if (param_2 == 0xffffffff) {
    FUN_0062ff10("High Score files generated!","Message",0);
  }
LAB_00633769:
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

