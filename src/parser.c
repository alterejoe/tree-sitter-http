#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_GET = 1,
  anon_sym_POST = 2,
  anon_sym_PUT = 3,
  anon_sym_DELETE = 4,
  anon_sym_HEAD = 5,
  anon_sym_OPTIONS = 6,
  anon_sym_PATCH = 7,
  anon_sym_TRACE = 8,
  anon_sym_get = 9,
  anon_sym_post = 10,
  anon_sym_put = 11,
  anon_sym_delete = 12,
  anon_sym_head = 13,
  anon_sym_options = 14,
  anon_sym_patch = 15,
  anon_sym_trace = 16,
  sym_url = 17,
  sym_http_version = 18,
  sym_status_code = 19,
  sym_status_message = 20,
  anon_sym_COLON = 21,
  sym_header_name = 22,
  sym_header_value = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym_content = 26,
  sym_delimiter = 27,
  sym_whitespace = 28,
  sym_separator = 29,
  sym_response_body = 30,
  sym_exiteddelimeter = 31,
  sym_requests = 32,
  sym_request = 33,
  sym_response = 34,
  sym_method = 35,
  sym_status_line = 36,
  sym_header = 37,
  sym_body = 38,
  aux_sym_requests_repeat1 = 39,
  aux_sym_request_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_head] = "head",
  [anon_sym_options] = "options",
  [anon_sym_patch] = "patch",
  [anon_sym_trace] = "trace",
  [sym_url] = "url",
  [sym_http_version] = "http_version",
  [sym_status_code] = "status_code",
  [sym_status_message] = "status_message",
  [anon_sym_COLON] = ": ",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_content] = "content",
  [sym_delimiter] = "delimiter",
  [sym_whitespace] = "whitespace",
  [sym_separator] = "separator",
  [sym_response_body] = "response_body",
  [sym_exiteddelimeter] = "exiteddelimeter",
  [sym_requests] = "requests",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_method] = "method",
  [sym_status_line] = "status_line",
  [sym_header] = "header",
  [sym_body] = "body",
  [aux_sym_requests_repeat1] = "requests_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_trace] = anon_sym_trace,
  [sym_url] = sym_url,
  [sym_http_version] = sym_http_version,
  [sym_status_code] = sym_status_code,
  [sym_status_message] = sym_status_message,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_content] = sym_content,
  [sym_delimiter] = sym_delimiter,
  [sym_whitespace] = sym_whitespace,
  [sym_separator] = sym_separator,
  [sym_response_body] = sym_response_body,
  [sym_exiteddelimeter] = sym_exiteddelimeter,
  [sym_requests] = sym_requests,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_method] = sym_method,
  [sym_status_line] = sym_status_line,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [aux_sym_requests_repeat1] = aux_sym_requests_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_message] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_response_body] = {
    .visible = true,
    .named = true,
  },
  [sym_exiteddelimeter] = {
    .visible = true,
    .named = true,
  },
  [sym_requests] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_status_line] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_requests_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_http_version = 1,
  field_status_code = 2,
  field_status_message = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_http_version] = "http_version",
  [field_status_code] = "status_code",
  [field_status_message] = "status_message",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_http_version, 0},
    {field_status_code, 1},
    {field_status_message, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 9,
  [31] = 31,
  [32] = 32,
  [33] = 12,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 37,
  [45] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        ' ', 6,
        '#', 16,
        ':', 8,
        'D', 160,
        'G', 161,
        'H', 162,
        'O', 172,
        'P', 156,
        'T', 173,
        'd', 189,
        'g', 190,
        'h', 191,
        'o', 201,
        'p', 185,
        't', 202,
        '{', 215,
        '}', 216,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ' ', 6,
        '#', 16,
        ':', 8,
        'D', 160,
        'G', 161,
        'H', 162,
        'O', 172,
        'P', 156,
        'T', 173,
        'd', 189,
        'g', 190,
        'h', 191,
        'o', 201,
        'p', 185,
        't', 202,
        '{', 215,
        '}', 216,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 6,
        '#', 16,
        ':', 8,
        'D', 160,
        'G', 161,
        'H', 162,
        'O', 172,
        'P', 156,
        'T', 173,
        'd', 189,
        'g', 190,
        'h', 191,
        'o', 201,
        'p', 185,
        't', 202,
        '{', 215,
        '}', 216,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(219);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(121);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == '}') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 109:
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        '#', 16,
        'D', 160,
        'G', 161,
        'H', 162,
        'O', 172,
        'P', 156,
        'T', 173,
        'd', 189,
        'g', 190,
        'h', 191,
        'o', 201,
        'p', 185,
        't', 202,
        '{', 215,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 110:
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        '#', 16,
        'D', 31,
        'G', 32,
        'H', 33,
        'O', 43,
        'P', 27,
        'T', 44,
        'd', 64,
        'g', 65,
        'h', 66,
        'o', 85,
        'p', 55,
        't', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(110);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      ADVANCE_MAP(
        '#', 16,
        'D', 31,
        'G', 32,
        'H', 33,
        'O', 43,
        'P', 26,
        'T', 44,
        'd', 64,
        'g', 65,
        'h', 66,
        'o', 85,
        'p', 55,
        't', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_patch);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_trace);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_http_version);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_status_message);
      if (lookahead == ' ') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_status_message);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(179);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(126);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(170);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_separator);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_response_body);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_response_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_exiteddelimeter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 109},
  [3] = {.lex_state = 109},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 109},
  [6] = {.lex_state = 109},
  [7] = {.lex_state = 109},
  [8] = {.lex_state = 109},
  [9] = {.lex_state = 109},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 111},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 111},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 110},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_requests] = STATE(42),
    [sym_request] = STATE(23),
    [sym_response] = STATE(22),
    [sym_method] = STATE(34),
    [sym_status_line] = STATE(28),
    [aux_sym_requests_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_head] = ACTIONS(5),
    [anon_sym_options] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
    [sym_url] = ACTIONS(7),
    [sym_http_version] = ACTIONS(9),
  },
  [2] = {
    [sym_header] = STATE(3),
    [sym_body] = STATE(13),
    [aux_sym_request_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_get] = ACTIONS(13),
    [anon_sym_post] = ACTIONS(13),
    [anon_sym_put] = ACTIONS(13),
    [anon_sym_delete] = ACTIONS(13),
    [anon_sym_head] = ACTIONS(13),
    [anon_sym_options] = ACTIONS(13),
    [anon_sym_patch] = ACTIONS(13),
    [anon_sym_trace] = ACTIONS(13),
    [sym_url] = ACTIONS(13),
    [sym_http_version] = ACTIONS(13),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(13),
    [sym_whitespace] = ACTIONS(19),
  },
  [3] = {
    [sym_header] = STATE(9),
    [sym_body] = STATE(17),
    [aux_sym_request_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(23),
    [anon_sym_POST] = ACTIONS(23),
    [anon_sym_PUT] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_HEAD] = ACTIONS(23),
    [anon_sym_OPTIONS] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_TRACE] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_post] = ACTIONS(23),
    [anon_sym_put] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_head] = ACTIONS(23),
    [anon_sym_options] = ACTIONS(23),
    [anon_sym_patch] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(23),
    [sym_url] = ACTIONS(23),
    [sym_http_version] = ACTIONS(23),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(25),
  },
  [4] = {
    [sym_header] = STATE(8),
    [sym_body] = STATE(17),
    [aux_sym_request_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(23),
    [anon_sym_POST] = ACTIONS(23),
    [anon_sym_PUT] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_HEAD] = ACTIONS(23),
    [anon_sym_OPTIONS] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_TRACE] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_post] = ACTIONS(23),
    [anon_sym_put] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_head] = ACTIONS(23),
    [anon_sym_options] = ACTIONS(23),
    [anon_sym_patch] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(23),
    [sym_url] = ACTIONS(23),
    [sym_http_version] = ACTIONS(23),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(25),
  },
  [5] = {
    [sym_header] = STATE(8),
    [sym_body] = STATE(17),
    [aux_sym_request_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(23),
    [anon_sym_POST] = ACTIONS(23),
    [anon_sym_PUT] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_HEAD] = ACTIONS(23),
    [anon_sym_OPTIONS] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_TRACE] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_post] = ACTIONS(23),
    [anon_sym_put] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_head] = ACTIONS(23),
    [anon_sym_options] = ACTIONS(23),
    [anon_sym_patch] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(23),
    [sym_url] = ACTIONS(23),
    [sym_http_version] = ACTIONS(23),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(27),
  },
  [6] = {
    [sym_header] = STATE(7),
    [sym_body] = STATE(16),
    [aux_sym_request_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GET] = ACTIONS(31),
    [anon_sym_POST] = ACTIONS(31),
    [anon_sym_PUT] = ACTIONS(31),
    [anon_sym_DELETE] = ACTIONS(31),
    [anon_sym_HEAD] = ACTIONS(31),
    [anon_sym_OPTIONS] = ACTIONS(31),
    [anon_sym_PATCH] = ACTIONS(31),
    [anon_sym_TRACE] = ACTIONS(31),
    [anon_sym_get] = ACTIONS(31),
    [anon_sym_post] = ACTIONS(31),
    [anon_sym_put] = ACTIONS(31),
    [anon_sym_delete] = ACTIONS(31),
    [anon_sym_head] = ACTIONS(31),
    [anon_sym_options] = ACTIONS(31),
    [anon_sym_patch] = ACTIONS(31),
    [anon_sym_trace] = ACTIONS(31),
    [sym_url] = ACTIONS(31),
    [sym_http_version] = ACTIONS(31),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(31),
    [sym_whitespace] = ACTIONS(33),
  },
  [7] = {
    [sym_header] = STATE(9),
    [sym_body] = STATE(18),
    [aux_sym_request_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_get] = ACTIONS(37),
    [anon_sym_post] = ACTIONS(37),
    [anon_sym_put] = ACTIONS(37),
    [anon_sym_delete] = ACTIONS(37),
    [anon_sym_head] = ACTIONS(37),
    [anon_sym_options] = ACTIONS(37),
    [anon_sym_patch] = ACTIONS(37),
    [anon_sym_trace] = ACTIONS(37),
    [sym_url] = ACTIONS(37),
    [sym_http_version] = ACTIONS(37),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(37),
    [sym_whitespace] = ACTIONS(39),
  },
  [8] = {
    [sym_header] = STATE(9),
    [sym_body] = STATE(16),
    [aux_sym_request_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GET] = ACTIONS(31),
    [anon_sym_POST] = ACTIONS(31),
    [anon_sym_PUT] = ACTIONS(31),
    [anon_sym_DELETE] = ACTIONS(31),
    [anon_sym_HEAD] = ACTIONS(31),
    [anon_sym_OPTIONS] = ACTIONS(31),
    [anon_sym_PATCH] = ACTIONS(31),
    [anon_sym_TRACE] = ACTIONS(31),
    [anon_sym_get] = ACTIONS(31),
    [anon_sym_post] = ACTIONS(31),
    [anon_sym_put] = ACTIONS(31),
    [anon_sym_delete] = ACTIONS(31),
    [anon_sym_head] = ACTIONS(31),
    [anon_sym_options] = ACTIONS(31),
    [anon_sym_patch] = ACTIONS(31),
    [anon_sym_trace] = ACTIONS(31),
    [sym_url] = ACTIONS(31),
    [sym_http_version] = ACTIONS(31),
    [sym_header_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_delimiter] = ACTIONS(31),
    [sym_whitespace] = ACTIONS(33),
  },
  [9] = {
    [sym_header] = STATE(9),
    [aux_sym_request_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_GET] = ACTIONS(43),
    [anon_sym_POST] = ACTIONS(43),
    [anon_sym_PUT] = ACTIONS(43),
    [anon_sym_DELETE] = ACTIONS(43),
    [anon_sym_HEAD] = ACTIONS(43),
    [anon_sym_OPTIONS] = ACTIONS(43),
    [anon_sym_PATCH] = ACTIONS(43),
    [anon_sym_TRACE] = ACTIONS(43),
    [anon_sym_get] = ACTIONS(43),
    [anon_sym_post] = ACTIONS(43),
    [anon_sym_put] = ACTIONS(43),
    [anon_sym_delete] = ACTIONS(43),
    [anon_sym_head] = ACTIONS(43),
    [anon_sym_options] = ACTIONS(43),
    [anon_sym_patch] = ACTIONS(43),
    [anon_sym_trace] = ACTIONS(43),
    [sym_url] = ACTIONS(43),
    [sym_http_version] = ACTIONS(43),
    [sym_header_name] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_delimiter] = ACTIONS(43),
    [sym_whitespace] = ACTIONS(41),
  },
  [10] = {
    [sym_request] = STATE(23),
    [sym_response] = STATE(22),
    [sym_method] = STATE(34),
    [sym_status_line] = STATE(28),
    [aux_sym_requests_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_GET] = ACTIONS(50),
    [anon_sym_POST] = ACTIONS(50),
    [anon_sym_PUT] = ACTIONS(50),
    [anon_sym_DELETE] = ACTIONS(50),
    [anon_sym_HEAD] = ACTIONS(50),
    [anon_sym_OPTIONS] = ACTIONS(50),
    [anon_sym_PATCH] = ACTIONS(50),
    [anon_sym_TRACE] = ACTIONS(50),
    [anon_sym_get] = ACTIONS(50),
    [anon_sym_post] = ACTIONS(50),
    [anon_sym_put] = ACTIONS(50),
    [anon_sym_delete] = ACTIONS(50),
    [anon_sym_head] = ACTIONS(50),
    [anon_sym_options] = ACTIONS(50),
    [anon_sym_patch] = ACTIONS(50),
    [anon_sym_trace] = ACTIONS(50),
    [sym_url] = ACTIONS(53),
    [sym_http_version] = ACTIONS(56),
  },
  [11] = {
    [sym_request] = STATE(23),
    [sym_response] = STATE(22),
    [sym_method] = STATE(34),
    [sym_status_line] = STATE(28),
    [aux_sym_requests_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_head] = ACTIONS(5),
    [anon_sym_options] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
    [sym_url] = ACTIONS(7),
    [sym_http_version] = ACTIONS(9),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_GET] = ACTIONS(63),
    [anon_sym_POST] = ACTIONS(63),
    [anon_sym_PUT] = ACTIONS(63),
    [anon_sym_DELETE] = ACTIONS(63),
    [anon_sym_HEAD] = ACTIONS(63),
    [anon_sym_OPTIONS] = ACTIONS(63),
    [anon_sym_PATCH] = ACTIONS(63),
    [anon_sym_TRACE] = ACTIONS(63),
    [anon_sym_get] = ACTIONS(63),
    [anon_sym_post] = ACTIONS(63),
    [anon_sym_put] = ACTIONS(63),
    [anon_sym_delete] = ACTIONS(63),
    [anon_sym_head] = ACTIONS(63),
    [anon_sym_options] = ACTIONS(63),
    [anon_sym_patch] = ACTIONS(63),
    [anon_sym_trace] = ACTIONS(63),
    [sym_url] = ACTIONS(63),
    [sym_http_version] = ACTIONS(63),
    [sym_header_name] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_delimiter] = ACTIONS(63),
    [sym_whitespace] = ACTIONS(61),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(23),
    [anon_sym_POST] = ACTIONS(23),
    [anon_sym_PUT] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_HEAD] = ACTIONS(23),
    [anon_sym_OPTIONS] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_TRACE] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_post] = ACTIONS(23),
    [anon_sym_put] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_head] = ACTIONS(23),
    [anon_sym_options] = ACTIONS(23),
    [anon_sym_patch] = ACTIONS(23),
    [anon_sym_trace] = ACTIONS(23),
    [sym_url] = ACTIONS(23),
    [sym_http_version] = ACTIONS(23),
    [sym_delimiter] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(25),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_GET] = ACTIONS(67),
    [anon_sym_POST] = ACTIONS(67),
    [anon_sym_PUT] = ACTIONS(67),
    [anon_sym_DELETE] = ACTIONS(67),
    [anon_sym_HEAD] = ACTIONS(67),
    [anon_sym_OPTIONS] = ACTIONS(67),
    [anon_sym_PATCH] = ACTIONS(67),
    [anon_sym_TRACE] = ACTIONS(67),
    [anon_sym_get] = ACTIONS(67),
    [anon_sym_post] = ACTIONS(67),
    [anon_sym_put] = ACTIONS(67),
    [anon_sym_delete] = ACTIONS(67),
    [anon_sym_head] = ACTIONS(67),
    [anon_sym_options] = ACTIONS(67),
    [anon_sym_patch] = ACTIONS(67),
    [anon_sym_trace] = ACTIONS(67),
    [sym_url] = ACTIONS(67),
    [sym_http_version] = ACTIONS(67),
    [sym_delimiter] = ACTIONS(67),
    [sym_whitespace] = ACTIONS(65),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_get] = ACTIONS(71),
    [anon_sym_post] = ACTIONS(71),
    [anon_sym_put] = ACTIONS(71),
    [anon_sym_delete] = ACTIONS(71),
    [anon_sym_head] = ACTIONS(71),
    [anon_sym_options] = ACTIONS(71),
    [anon_sym_patch] = ACTIONS(71),
    [anon_sym_trace] = ACTIONS(71),
    [sym_url] = ACTIONS(71),
    [sym_http_version] = ACTIONS(71),
    [sym_delimiter] = ACTIONS(71),
    [sym_whitespace] = ACTIONS(69),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_get] = ACTIONS(37),
    [anon_sym_post] = ACTIONS(37),
    [anon_sym_put] = ACTIONS(37),
    [anon_sym_delete] = ACTIONS(37),
    [anon_sym_head] = ACTIONS(37),
    [anon_sym_options] = ACTIONS(37),
    [anon_sym_patch] = ACTIONS(37),
    [anon_sym_trace] = ACTIONS(37),
    [sym_url] = ACTIONS(37),
    [sym_http_version] = ACTIONS(37),
    [sym_delimiter] = ACTIONS(37),
    [sym_whitespace] = ACTIONS(39),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GET] = ACTIONS(31),
    [anon_sym_POST] = ACTIONS(31),
    [anon_sym_PUT] = ACTIONS(31),
    [anon_sym_DELETE] = ACTIONS(31),
    [anon_sym_HEAD] = ACTIONS(31),
    [anon_sym_OPTIONS] = ACTIONS(31),
    [anon_sym_PATCH] = ACTIONS(31),
    [anon_sym_TRACE] = ACTIONS(31),
    [anon_sym_get] = ACTIONS(31),
    [anon_sym_post] = ACTIONS(31),
    [anon_sym_put] = ACTIONS(31),
    [anon_sym_delete] = ACTIONS(31),
    [anon_sym_head] = ACTIONS(31),
    [anon_sym_options] = ACTIONS(31),
    [anon_sym_patch] = ACTIONS(31),
    [anon_sym_trace] = ACTIONS(31),
    [sym_url] = ACTIONS(31),
    [sym_http_version] = ACTIONS(31),
    [sym_delimiter] = ACTIONS(31),
    [sym_whitespace] = ACTIONS(33),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_GET] = ACTIONS(75),
    [anon_sym_POST] = ACTIONS(75),
    [anon_sym_PUT] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_HEAD] = ACTIONS(75),
    [anon_sym_OPTIONS] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_TRACE] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_post] = ACTIONS(75),
    [anon_sym_put] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_head] = ACTIONS(75),
    [anon_sym_options] = ACTIONS(75),
    [anon_sym_patch] = ACTIONS(75),
    [anon_sym_trace] = ACTIONS(75),
    [sym_url] = ACTIONS(75),
    [sym_http_version] = ACTIONS(75),
    [sym_delimiter] = ACTIONS(75),
    [sym_whitespace] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(35), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_delimiter,
  [23] = 1,
    ACTIONS(79), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_exiteddelimeter,
  [46] = 1,
    ACTIONS(29), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_delimiter,
  [69] = 2,
    ACTIONS(83), 1,
      sym_exiteddelimeter,
    ACTIONS(81), 19,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
  [94] = 2,
    ACTIONS(83), 1,
      sym_delimiter,
    ACTIONS(81), 19,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
  [119] = 1,
    ACTIONS(85), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_exiteddelimeter,
  [142] = 1,
    ACTIONS(73), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_delimiter,
  [165] = 1,
    ACTIONS(87), 20,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
      sym_delimiter,
  [188] = 1,
    ACTIONS(48), 19,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_TRACE,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
      anon_sym_trace,
      sym_url,
      sym_http_version,
  [210] = 3,
    ACTIONS(89), 1,
      sym_header_name,
    ACTIONS(91), 1,
      sym_separator,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
  [221] = 3,
    ACTIONS(89), 1,
      sym_header_name,
    ACTIONS(93), 1,
      sym_separator,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
  [232] = 3,
    ACTIONS(41), 1,
      sym_separator,
    ACTIONS(95), 1,
      sym_header_name,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
  [243] = 2,
    ACTIONS(98), 1,
      sym_header_name,
    ACTIONS(100), 1,
      sym_separator,
  [250] = 2,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_content,
  [257] = 2,
    ACTIONS(61), 1,
      sym_separator,
    ACTIONS(63), 1,
      sym_header_name,
  [264] = 1,
    ACTIONS(106), 1,
      sym_url,
  [268] = 1,
    ACTIONS(108), 1,
      anon_sym_COLON,
  [272] = 1,
    ACTIONS(110), 1,
      sym_url,
  [276] = 1,
    ACTIONS(112), 1,
      sym_header_value,
  [280] = 1,
    ACTIONS(114), 1,
      sym_status_code,
  [284] = 1,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [288] = 1,
    ACTIONS(118), 1,
      sym_response_body,
  [292] = 1,
    ACTIONS(120), 1,
      sym_response_body,
  [296] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [300] = 1,
    ACTIONS(124), 1,
      sym_status_message,
  [304] = 1,
    ACTIONS(126), 1,
      sym_header_value,
  [308] = 1,
    ACTIONS(128), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 23,
  [SMALL_STATE(21)] = 46,
  [SMALL_STATE(22)] = 69,
  [SMALL_STATE(23)] = 94,
  [SMALL_STATE(24)] = 119,
  [SMALL_STATE(25)] = 142,
  [SMALL_STATE(26)] = 165,
  [SMALL_STATE(27)] = 188,
  [SMALL_STATE(28)] = 210,
  [SMALL_STATE(29)] = 221,
  [SMALL_STATE(30)] = 232,
  [SMALL_STATE(31)] = 243,
  [SMALL_STATE(32)] = 250,
  [SMALL_STATE(33)] = 257,
  [SMALL_STATE(34)] = 264,
  [SMALL_STATE(35)] = 268,
  [SMALL_STATE(36)] = 272,
  [SMALL_STATE(37)] = 276,
  [SMALL_STATE(38)] = 280,
  [SMALL_STATE(39)] = 284,
  [SMALL_STATE(40)] = 288,
  [SMALL_STATE(41)] = 292,
  [SMALL_STATE(42)] = 296,
  [SMALL_STATE(43)] = 300,
  [SMALL_STATE(44)] = 304,
  [SMALL_STATE(45)] = 308,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requests, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requests_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requests_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requests_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requests_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requests, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requests_repeat1, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 3, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 3, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_customhttp(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
