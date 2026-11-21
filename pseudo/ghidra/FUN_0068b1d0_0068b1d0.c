// FUN_0068b1d0  0068b1d0

void __fastcall FUN_0068b1d0(int param_1)

{
  int iVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar3;
  size_t sVar4;
  char *_Str;
  int iVar5;
  FILE *pFVar6;
  char local_234 [268];
  FILE *local_128;
  int local_124;
  int local_120;
  char local_11c [268];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0068d4b0(**(undefined4 **)(param_1 + 0x214),param_1 + 0x210);
  iVar5 = param_1 + 0x210;
  local_8 = *(int *)(param_1 + 0x214);
  local_c = 0;
  if (iVar5 == 0) {
    _invalid_parameter_noinfo();
  }
  local_c = iVar5;
  if (*(int *)(param_1 + 0x218) != 0) {
    strcpy(local_11c,(char *)(param_1 + 8));
    FUN_005ea5b0(local_11c);
    strcpy(local_234,local_11c);
    local_128 = (FILE *)FUN_005ea9c0(local_234,&DAT_006e565c);
    if (local_128 != (FILE *)0x0) {
      while( true ) {
        if ((local_124 == 0) || (local_124 != local_c)) {
          _invalid_parameter_noinfo();
        }
        if (local_120 == local_8) break;
        this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_0068d4f0();
        pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(this);
        fwrite(&DAT_006e5634,1,1,local_128);
        pFVar6 = local_128;
        sVar4 = strlen(pcVar3);
        fwrite(pcVar3,1,sVar4,pFVar6);
        fwrite(&DAT_006e5630,1,1,local_128);
        pFVar6 = local_128;
        sVar4 = strlen("\r\n");
        fwrite(&DAT_006d8c14,1,sVar4,pFVar6);
        if (local_124 == 0) {
          _invalid_parameter_noinfo();
        }
        if (local_120 == *(int *)(local_124 + 4)) {
          _invalid_parameter_noinfo();
        }
        iVar2 = local_120;
        iVar5 = **(int **)(local_120 + 0x2c);
        if (local_120 == -0x28) {
          _invalid_parameter_noinfo();
        }
        iVar1 = *(int *)(iVar2 + 0x2c);
        if (iVar2 == -0x28) {
          _invalid_parameter_noinfo();
        }
        while( true ) {
          if (iVar2 == -0x28) {
            _invalid_parameter_noinfo();
          }
          if (iVar5 == iVar1) break;
          if (iVar2 == -0x28) {
            _invalid_parameter_noinfo();
          }
          if (iVar5 == *(int *)(iVar2 + 0x2c)) {
            _invalid_parameter_noinfo();
          }
          pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              (iVar5 + 0xc));
          if (iVar2 == -0x28) {
            _invalid_parameter_noinfo();
          }
          if (iVar5 == *(int *)(iVar2 + 0x2c)) {
            _invalid_parameter_noinfo();
          }
          _Str = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (iVar5 + 0x28));
          pFVar6 = local_128;
          sVar4 = strlen(pcVar3);
          fwrite(pcVar3,1,sVar4,pFVar6);
          fwrite(&DAT_006e5658,1,1,local_128);
          pFVar6 = local_128;
          sVar4 = strlen(_Str);
          fwrite(_Str,1,sVar4,pFVar6);
          pFVar6 = local_128;
          sVar4 = strlen("\r\n");
          fwrite(&DAT_006d8c14,1,sVar4,pFVar6);
          FUN_0068edc0();
        }
        pFVar6 = local_128;
        sVar4 = strlen("\r\n");
        fwrite(&DAT_006d8c14,1,sVar4,pFVar6);
        FUN_0068e790();
      }
      fclose(local_128);
      FUN_0068b8f0();
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

