#include <boost/log/trivial.hpp>

int main(int, char*[]) {

  BOOST_LOG_TRIVIAL(trace) << "Trace log.";
  BOOST_LOG_TRIVIAL(debug) << "Debug log.";
  BOOST_LOG_TRIVIAL(info) << "Info log.";
  BOOST_LOG_TRIVIAL(warning) << "Warning log.";
  BOOST_LOG_TRIVIAL(error) << "Error log.";
  BOOST_LOG_TRIVIAL(fatal) << "Fatal log.";
  
  return 0;
}
