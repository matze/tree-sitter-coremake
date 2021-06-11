#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_workspace = 1,
  anon_sym_group = 2,
  anon_sym_con = 3,
  anon_sym_exe = 4,
  anon_sym_lib = 5,
  anon_sym_dll = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_condition_token1 = 11,
  anon_sym_use = 12,
  anon_sym_source = 13,
  anon_sym_header = 14,
  sym_file_path = 15,
  sym_target = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym_definition = 19,
  sym_definition_type = 20,
  sym_block = 21,
  sym__conditional = 22,
  sym_condition = 23,
  sym__statement = 24,
  sym_use_statement = 25,
  sym_file_statement = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_block_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_workspace] = "workspace",
  [anon_sym_group] = "group",
  [anon_sym_con] = "con",
  [anon_sym_exe] = "exe",
  [anon_sym_lib] = "lib",
  [anon_sym_dll] = "dll",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_use] = "use",
  [anon_sym_source] = "source",
  [anon_sym_header] = "header",
  [sym_file_path] = "file_path",
  [sym_target] = "target",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_definition_type] = "definition_type",
  [sym_block] = "block",
  [sym__conditional] = "_conditional",
  [sym_condition] = "condition",
  [sym__statement] = "_statement",
  [sym_use_statement] = "use_statement",
  [sym_file_statement] = "file_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_con] = anon_sym_con,
  [anon_sym_exe] = anon_sym_exe,
  [anon_sym_lib] = anon_sym_lib,
  [anon_sym_dll] = anon_sym_dll,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_header] = anon_sym_header,
  [sym_file_path] = sym_file_path,
  [sym_target] = sym_target,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_definition_type] = sym_definition_type,
  [sym_block] = sym_block,
  [sym__conditional] = sym__conditional,
  [sym_condition] = sym_condition,
  [sym__statement] = sym__statement,
  [sym_use_statement] = sym_use_statement,
  [sym_file_statement] = sym_file_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__conditional] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_file_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 39:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_exe);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_dll);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_target);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [anon_sym_exe] = ACTIONS(1),
    [anon_sym_lib] = ACTIONS(1),
    [anon_sym_dll] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_definition] = STATE(3),
    [sym_definition_type] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_workspace] = ACTIONS(7),
    [anon_sym_group] = ACTIONS(7),
    [anon_sym_con] = ACTIONS(7),
    [anon_sym_exe] = ACTIONS(7),
    [anon_sym_lib] = ACTIONS(7),
    [anon_sym_dll] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_definition_type,
    STATE(2), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [22] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_definition_type,
    STATE(2), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    ACTIONS(18), 1,
      anon_sym_use,
    ACTIONS(21), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(4), 4,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [64] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_use,
    ACTIONS(28), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(4), 4,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_use,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(5), 4,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      aux_sym_block_repeat1,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 4,
      anon_sym_RBRACE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
  [153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 4,
      anon_sym_RBRACE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym_target,
    STATE(15), 1,
      sym__conditional,
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
  [186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_condition_token1,
    STATE(17), 1,
      sym_condition,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_target,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_target,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_target,
  [231] = 2,
    ACTIONS(60), 1,
      sym_file_path,
    ACTIONS(62), 1,
      sym_comment,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_target,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 238,
  [SMALL_STATE(22)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_coremake(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
