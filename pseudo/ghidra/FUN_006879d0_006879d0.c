// FUN_006879d0  006879d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_006879d0(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  DWORD DVar2;
  SIZE_T SVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  int iVar6;
  HANDLE pvVar7;
  BOOL BVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  code *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  code *pcVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  uint uStack_1458;
  undefined *local_1448;
  int local_1444 [2];
  undefined4 local_143c;
  int local_142c;
  undefined4 local_1424;
  undefined4 local_1420;
  undefined4 local_1418;
  undefined4 local_1398;
  CHAR local_1394;
  undefined1 local_1393 [871];
  CHAR local_102c [132];
  undefined4 local_fa8;
  undefined1 local_fa4 [2076];
  undefined4 local_788;
  int *local_784;
  int *local_780;
  CHAR *local_77c;
  CHAR *local_778;
  uint local_774;
  int *local_770;
  undefined1 *local_76c;
  int local_768;
  CHAR local_764 [1004];
  char *local_378;
  _MEMORY_BASIC_INFORMATION local_374;
  char *local_358;
  CHAR local_354 [264];
  int local_24c;
  char *local_248;
  char local_244 [4];
  char local_240 [4];
  undefined1 local_23c [256];
  LPCSTR local_13c;
  int local_138;
  int *local_134;
  HANDLE local_130;
  CHAR local_12c [268];
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_0068736b;
  local_14 = ExceptionList;
  local_c = DAT_00781870 ^ 0x702b58;
  uStack_1458 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_1458;
  ExceptionList = &local_14;
  local_20 = uStack_1458;
  puVar1 = &uStack_1458;
  if (DAT_01631bb0 == 0) {
    DAT_01631bb0 = 1;
    local_244 = (char  [4])s_Unknown_006e5214._0_4_;
    local_240 = (char  [4])s_Unknown_006e5214._4_4_;
    memset(local_23c,0,0xfc);
    DVar2 = GetModuleFileNameA((HMODULE)0x0,local_354,0x104);
    if (DVar2 == 0) {
      local_354[0] = '\0';
    }
    local_13c = (LPCSTR)FUN_00688b20(local_354);
    lstrcpyA(local_244,local_13c);
    local_358 = strrchr(local_244,0x2e);
    if (local_358 != (char *)0x0) {
      *local_358 = '\0';
    }
    lstrcpyA(local_13c,"errorlog.txt");
    local_130 = CreateFileA(local_354,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80000080,
                            (HANDLE)0x0);
    if (local_130 == (HANDLE)0xffffffff) {
      OutputDebugStringA("Error creating exception report");
      puVar1 = (uint *)local_1c;
    }
    else {
      SetFilePointer(local_130,0,(PLONG)0x0,2);
      FUN_00688440(local_130,"\r\n%s\r\n%s\r\n\r\n",s__________________________________00781890,
                   s__________________________________00781890);
      local_134 = (int *)*param_1;
      local_24c = param_1[1];
      local_248 = "Unknown";
      SVar3 = VirtualQuery(*(LPCVOID *)(local_24c + 0xb8),&local_374,0x1c);
      if ((SVar3 != 0) &&
         (DVar2 = GetModuleFileNameA(local_374.AllocationBase,local_12c,0x104), DVar2 != 0)) {
        local_248 = (char *)FUN_00688b20(local_12c);
      }
      uVar4 = FUN_00688940(*local_134,local_248,*(undefined4 *)(local_24c + 0xbc),
                           *(undefined4 *)(local_24c + 0xb8));
      FUN_00688440(local_130,"%s caused %s in module %s at 0x%04x:0x%08x.\r\n",local_244,uVar4);
      FUN_00688440(local_130,"Exception handler called in %s.\r\n",param_2);
      FUN_00688820(local_130);
      if ((*local_134 == -0x3ffffffb) && (1 < (uint)local_134[4])) {
        local_378 = "Read from";
        if (local_134[5] != 0) {
          local_378 = "Write to";
        }
        wsprintfA(local_764,"%s location 0x%08x caused an access violation.\r\n",local_378,
                  local_134[6]);
        FUN_00688440(local_130,&DAT_006b2fd8,local_764);
      }
      FUN_00688440(local_130,&DAT_006d8c14);
      FUN_00688440(local_130,"Registers:\r\n");
      FUN_00688440(local_130,"EAX=0x%08x CS=0x%04x EIP=%08x EFLGS=0x%08x\r\n",
                   *(undefined4 *)(local_24c + 0xb0),*(undefined4 *)(local_24c + 0xbc),
                   *(undefined4 *)(local_24c + 0xb8),*(undefined4 *)(local_24c + 0xc0));
      FUN_00688440(local_130,"EBX=0x%08x SS=0x%04x ESP=0x%08x EBP=0x%08x\r\n",
                   *(undefined4 *)(local_24c + 0xa4),*(undefined4 *)(local_24c + 200),
                   *(undefined4 *)(local_24c + 0xc4),*(undefined4 *)(local_24c + 0xb4));
      FUN_00688440(local_130,"ECX=0x%08x DS=0x%04x ESI=0x%08x FS=0x%04x\r\n",
                   *(undefined4 *)(local_24c + 0xac),*(undefined4 *)(local_24c + 0x98),
                   *(undefined4 *)(local_24c + 0xa0),*(undefined4 *)(local_24c + 0x90));
      FUN_00688440(local_130,"EDX=0x%08x ES=0x%04x EDI=0x%08x GS=0x%04x\r\n\r\n",
                   *(undefined4 *)(local_24c + 0xa8),*(undefined4 *)(local_24c + 0x94),
                   *(undefined4 *)(local_24c + 0x9c),*(undefined4 *)(local_24c + 0x8c));
      FUN_00688440(local_130,"Bytes at CS:EIP:\r\n");
      local_138 = *(int *)(local_24c + 0xb8);
      for (local_768 = 0; local_768 < 0x10; local_768 = local_768 + 1) {
        local_8 = 0;
        FUN_00688440(local_130,"0x%02x ",*(undefined1 *)(local_138 + local_768));
        local_8 = 0xfffffffe;
      }
      FUN_00688440(local_130,"\r\n\r\nStack dump:\r\n");
      local_8 = 1;
      local_784 = *(int **)(local_24c + 0xc4);
      local_780 = StackBase;
      if (local_784 + 0x800 < StackBase) {
        local_780 = local_784 + 0x800;
      }
      local_1394 = (CHAR)PTR_006b27f8;
      memset(local_1393,0,999);
      local_fa8 = 0x80;
      local_77c = local_102c;
      local_778 = &local_1394;
      local_788 = 0x800;
      local_76c = local_fa4;
      uVar4 = 1;
      pcVar13 = ".\\;..\\";
      pvVar5 = GetCurrentProcess();
      iVar6 = SymInitialize(pvVar5,pcVar13,uVar4);
      if (iVar6 != 0) {
        memset(local_1444,0,0xa4);
        local_1444[0] = *(int *)(local_24c + 0xb8);
        local_143c = 3;
        local_142c = *(int *)(local_24c + 0xb4);
        local_1424 = 3;
        local_1420 = *(undefined4 *)(local_24c + 0xc4);
        local_1418 = 3;
        puVar14 = &local_1398;
        uVar4 = *(undefined4 *)(local_24c + 0xb8);
        puVar16 = local_76c;
        pvVar5 = GetCurrentProcess();
        iVar6 = SymGetSymFromAddr(pvVar5,uVar4,puVar14,puVar16);
        if (iVar6 == 0) {
          iVar6 = wsprintfA(local_778,"%s (0x%08x)\r\n",local_248,*(undefined4 *)(local_24c + 0xb8))
          ;
          local_778 = local_778 + iVar6;
        }
        else {
          iVar6 = wsprintfA(local_778,"%s!%s+%d (0x%08x)\r\n",local_248,local_76c + 0x14,local_1398,
                            *(undefined4 *)(local_24c + 0xb8));
          local_778 = local_778 + iVar6;
        }
        while (local_784 <= local_780) {
          uVar17 = 0;
          uVar11 = 0;
          uVar4 = 0;
          piVar10 = local_1444;
          pcVar12 = SymFunctionTableAccess_exref;
          pcVar15 = SymGetModuleBase_exref;
          pvVar5 = GetCurrentThread();
          pvVar7 = GetCurrentProcess();
          iVar6 = StackWalk(0x14c,pvVar7,pvVar5,piVar10,uVar4,uVar11,pcVar12,pcVar15,uVar17);
          if ((iVar6 == 0) || (local_1444[0] == 0)) break;
          local_770 = (int *)(local_142c + 4);
          BVar8 = IsBadReadPtr(local_770,4);
          if ((BVar8 != 0) || ((local_770 == (int *)0x0 || (*local_770 == 0)))) {
            local_770 = local_780;
          }
          local_774 = 0;
          while ((local_784 <= local_780 && (local_784 <= local_770))) {
            uVar9 = local_774 & 0x80000007;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
            }
            if (uVar9 == 0) {
              iVar6 = wsprintfA(local_778,"0x%08x: ",local_784);
              local_778 = local_778 + iVar6;
            }
            local_1448 = &DAT_006e4ff8;
            local_774 = local_774 + 1;
            uVar9 = local_774 & 0x80000007;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
            }
            if (uVar9 == 0) {
              local_1448 = &DAT_006d8c14;
            }
            iVar6 = wsprintfA(local_778,"0x%08x%s",*local_784,local_1448);
            local_778 = local_778 + iVar6;
            local_784 = local_784 + 1;
            if (local_77c < local_778) {
              FUN_00688440(local_130,&DAT_006b2fd8,&local_1394);
              local_1394 = '\0';
              local_778 = &local_1394;
            }
          }
          uVar9 = local_774 & 0x80000007;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
          }
          if (uVar9 != 0) {
            iVar6 = wsprintfA(local_778,"\r\n");
            local_778 = local_778 + iVar6;
          }
          if (local_770 != local_780) {
            SVar3 = VirtualQuery((LPCVOID)*local_770,&local_374,0x1c);
            if ((SVar3 == 0) ||
               (DVar2 = GetModuleFileNameA(local_374.AllocationBase,local_12c,0x104), DVar2 == 0)) {
              strcpy(local_248,"Error - Unknown");
            }
            else {
              local_248 = (char *)FUN_00688b20(local_12c);
            }
            puVar14 = &local_1398;
            iVar6 = *local_770;
            puVar16 = local_76c;
            pvVar5 = GetCurrentProcess();
            iVar6 = SymGetSymFromAddr(pvVar5,iVar6,puVar14,puVar16);
            if (iVar6 == 0) {
              iVar6 = wsprintfA(local_778,"%s (0x%08x)\r\n",local_248,*local_770);
              local_778 = local_778 + iVar6;
            }
            else {
              iVar6 = wsprintfA(local_778,"%s!%s+%d (0x%08x)\r\n",local_248,local_76c + 0x14,
                                local_1398,*local_770);
              local_778 = local_778 + iVar6;
            }
          }
        }
        FUN_00688440(local_130,&DAT_006b2fd8,&local_1394);
        pvVar5 = GetCurrentProcess();
        SymCleanup(pvVar5);
      }
      local_8 = 0xfffffffe;
      FUN_006884b0(local_130);
      CloseHandle(local_130);
      puVar1 = (uint *)local_1c;
    }
  }
  local_1c = (undefined1 *)puVar1;
  ExceptionList = local_14;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

