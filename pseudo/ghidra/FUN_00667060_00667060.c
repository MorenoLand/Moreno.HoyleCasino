// FUN_00667060  00667060

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00667060(undefined4 param_1,undefined4 param_2,char param_3,char param_4)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_588c [260];
  intptr_t local_5788;
  char local_5784;
  undefined1 local_5783 [259];
  size_t local_5680;
  int local_567c;
  int local_5678;
  char local_5674;
  undefined1 local_5673 [259];
  int local_5570;
  undefined4 local_556c [5000];
  char local_74c [256];
  char local_64c;
  undefined1 local_64b [259];
  int local_548;
  int local_544;
  FILE *local_540;
  char local_53c [256];
  char local_43c;
  undefined1 local_43b [255];
  char local_33c;
  undefined1 local_33b [255];
  int local_23c;
  int local_238;
  _finddata64i32_t local_234;
  char local_10c;
  undefined1 local_10b [255];
  uint local_c;
  char *local_8;
  
  local_8 = (char *)0x66706d;
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_5784 = (char)PTR_006b27f8;
  memset(local_5783,0,0xff);
  local_43c = (char)PTR_006b27f8;
  memset(local_43b,0,0xff);
  local_5674 = (char)PTR_006b27f8;
  memset(local_5673,0,0xff);
  local_10c = (char)PTR_006b27f8;
  memset(local_10b,0,0xff);
  local_33c = (char)PTR_006b27f8;
  memset(local_33b,0,0xff);
  local_64c = (char)PTR_006b27f8;
  memset(local_64b,0,0xff);
  local_5570 = 0;
  local_5680 = 0;
  local_544 = -1;
  local_567c = -1;
  sprintf(local_53c,"numbering: %s",param_1);
  (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x1c))(local_53c);
  sprintf(local_588c,"%s*.CDS",param_1);
  local_5788 = _findfirst64i32(local_588c,&local_234);
  if (local_5788 != -1) {
    do {
      if ((local_234.attrib & 0x10) == 0) {
        pvVar1 = operator_new(0x100);
        local_556c[local_5680] = pvVar1;
        sprintf((char *)local_556c[local_5680],"%s%s",param_1,local_234.name);
        _strupr((char *)local_556c[local_5680]);
        local_5680 = local_5680 + 1;
        if (local_5680 == 5000) break;
      }
      iVar2 = _findnext64i32(local_5788,&local_234);
    } while (iVar2 != -1);
    _findclose(local_5788);
    qsort(local_556c,local_5680,4,FUN_00667840);
    for (local_23c = 0; local_23c < (int)local_5680; local_23c = local_23c + 1) {
      sprintf(local_53c,"numbering: %d of %d, %s",local_23c + 1,local_5680,param_1);
      (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x1c))(local_53c);
      local_8 = strrchr((char *)local_556c[local_23c],0x5c);
      if ((local_8 == (char *)0x0) || (iVar2 = isdigit((int)local_8[1]), iVar2 == 0)) {
        local_238 = FUN_00667860(local_556c[local_23c],&local_5784,&local_43c,&local_5674);
        if (local_238 == 0) break;
        FUN_00666760(local_238,&local_5678,&local_548,0);
        if (local_548 == local_544) {
          local_238 = local_238 + local_5570;
        }
      }
      else {
        local_238 = atoi(local_8 + 1);
        local_548 = -1;
        local_5678 = -1;
      }
      sprintf(local_588c,"%s%d.cds",param_2,local_238);
      CopyFileA((LPCSTR)local_556c[local_23c],local_588c,0);
      strcpy(local_588c,(char *)local_556c[local_23c]);
      pcVar5 = ".WAV";
      pcVar3 = strstr(local_588c,".CDS");
      strcpy(pcVar3,pcVar5);
      local_540 = (FILE *)FUN_005ea9c0(local_588c,&DAT_006c2d28);
      if (local_540 == (FILE *)0x0) {
        strcpy(local_588c,(char *)local_556c[local_23c]);
        pcVar5 = ".WAZ";
        pcVar3 = strstr(local_588c,".CDS");
        strcpy(pcVar3,pcVar5);
        local_540 = (FILE *)FUN_005ea9c0(local_588c,&DAT_006c2d28);
        if (local_540 != (FILE *)0x0) {
          FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x1fd);
          break;
        }
        fclose((FILE *)0x0);
        sprintf(local_74c,"%s%d.waz",param_2,local_238);
        CopyFileA(local_588c,local_74c,0);
      }
      else {
        fclose(local_540);
        if (param_3 == '\0') {
          sprintf(local_74c,"%s%d.wav",param_2,local_238);
        }
        else {
          sprintf(local_74c,"%s%d.waz",param_2,local_238);
        }
        if (param_4 == '\0') {
          CopyFileA(local_588c,local_74c,0);
        }
        else {
          FUN_00667b80(local_588c,local_74c);
        }
      }
      if ((local_544 != -1) &&
         (((local_548 != local_544 || (local_5678 != local_567c)) || (local_23c == local_5680 - 1)))
         ) {
        if (local_23c == local_5680 - 1) {
          local_5570 = local_5570 + 1;
        }
        uVar4 = FUN_006667c0(local_567c,local_544);
        sprintf(local_588c,"%s%d.clc",param_2,uVar4);
        local_540 = (FILE *)FUN_005ea9c0(local_588c,&DAT_006c2d2c);
        if (local_540 == (FILE *)0x0) {
          FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x20d);
          break;
        }
        fwrite(&local_5570,4,1,local_540);
        fclose(local_540);
        FUN_0062fde0("%s\t%s\t%s\t%d\n",&local_10c,&local_33c,&local_64c,local_5570);
        local_5570 = 0;
      }
      local_5570 = local_5570 + 1;
      local_544 = local_548;
      local_567c = local_5678;
      strcpy(&local_10c,&local_5784);
      strcpy(&local_33c,&local_43c);
      strcpy(&local_64c,&local_5674);
    }
    for (local_23c = 0; local_23c < (int)local_5680; local_23c = local_23c + 1) {
      operator_delete((void *)local_556c[local_23c]);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

